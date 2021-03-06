// ballot.c
// A toilet used to poll from players.
// Author: Spock @ FF   97.Mar.12.
// Last modified by Spock @ FF  97.Mar.18.

#include <ansi.h>

inherit ITEM;
inherit F_SAVE;

void init()
{
        add_action("do_setup", "setup");
        add_action("do_nominate", "nominate");
        add_action("do_vote", "vote");
        add_action("do_statistics", "stat");
        add_action("do_cancel", "cancel");
}

string query_save_file()
{
        return DATA_DIR + "ballot_box";
}

void create()
{
        seteuid( getuid() );

        set_name( HIC "三合一投票专用箱" NOR, ({ "ballot box", "box", "ballot" }) );
        set("no_get", 1);
        set("no_sac",1);
        set("no_clean_up", 1 );
        set("unit", "座");
        restore();
}

string short()
{
        int *ballots;

        ballots = query("ballots");

        if( !query("voting") )
                return HIC "投票专用箱 " NOR "(box) [ " HIR "没有投票活动 " NOR "]";
        if( !arrayp( ballots ) || !sizeof( ballots ) )
                return HIC "投票专用箱 " NOR "(box) [ " HIG "投票中" NOR ", " HIM "没有任何选票 " NOR "]";
        if( this_player() ) {
                if( query("voting_start_time") > time() ) {
                        return sprintf("%s " NOR "[ %s, " HIM "投票尚未开始 " NOR "]",
                        HIC "投票专用箱 " NOR "(box)",
                        ( query("final_nominate_time") > time()
                        ? HIM "提名中" NOR : HIR "提名截止" NOR ) );
                } else if( this_player()->query("vote/id") == query("voting_id")
                        && this_player()->query("vote/voted_option") ) {
                        return sprintf("%s " NOR "[ %s, " HIW "%d 投票人次" NOR ", " HIB "您已投票 " NOR "]",
                        HIC "投票专用箱 " NOR "(box)",
                        ( query("final_nominate_time") > time()
                        ? HIM "提名中" NOR : HIR "提名截止" NOR ),
                        query("voters_count") );
                } else {
                        return sprintf("%s [ %s" NOR ", " HIW "%d 投票人次, " HIC "您未投票 " NOR "]",
                        HIC "投票专用箱 " NOR "(box)",
                        ( query("final_nominate_time") > time()
                        ? HIM "提名中" NOR : HIR "提名截止" NOR ),
                        query("voters_count") );
                }
        }
}

string long()
{
        string long;
        int i;
        string *options;
        int *player_ballots;
        int *new_array;

        long = HIY "  [ 投票专用箱 ]" NOR "\n";
        long += " 要投票请按 vote xxx\n";
        long += " 要取消投票请按 cancel xxx\n";
        if( !query("voting") )
                return long + HIR "目前没有任何投票活动" NOR "\n";

        options = query("options");

        if( this_player()->query("vote/id") != query("voting_id") ) {
                this_player()->set("vote/id", query("voting_id") );
                this_player()->set("vote/voted_option", 0 );
                this_player()->set("vote/ballots", ({ }) );
        }
        player_ballots = this_player()->query("vote/ballots");

        if( sizeof( player_ballots ) == 0 || this_player()->query("vote/id")
                != query("voting_id") )
                player_ballots = ({ });

        if( sizeof( options ) > sizeof( player_ballots ) ) {
                new_array = allocate( i = ( sizeof( options ) - sizeof( player_ballots ) ) );
                new_array[i - 1] = 0;
                player_ballots += new_array;
        }

        this_player()->set("vote/ballots", player_ballots );
        player_ballots = this_player()->query("vote/ballots");

        long += query("desc") + "\n";
        long += HIW " <提名状况> " HIY "[开始时间] " NOR + ctime( query("voting_setup_time") ) + "\n";
        long += "            " HIY "[截止时间] " NOR + ctime( query("final_nominate_time") ) + "\n";
        long += "            " + ( time() < query("final_nominate_time") ? HIG "提名中" NOR "\n" : HIR "提名截止" NOR "\n" );

        long += HIW " <投票状态> " NOR;
        long += HIY "[投票开始时间] " NOR + ctime( query("voting_start_time")) + "\n";
        long += "            " + ( time() < query("voting_start_time") ? HIR "投票尚未开始" NOR "\n" : HIG "投票开始" NOR "\n" );
        if( query("max_voter_option") == 0 )
                long += HIC "            不限票数\n";
        else
                long += sprintf( HIC "            每人最高票数: " NOR "%s\n", query("max_voter_option")
                        ? sprintf("%d", query("max_voter_option")) : "不限票数" );

        long += HIW " <目前选项>" NOR "\n";

        for( i = 0; i < sizeof( options ); i++ ) {
                long += sprintf("%s" NOR "(" CYN "%2d" NOR ") %s\n",player_ballots[i] > 0 ? HIY "ˇ" NOR : "  ", i + 1, options[i] );
        }
        long += HIW " <投票情形>" NOR "\n";
        long += sprintf(HIC "  %d 投票人次" NOR ", ", query("voters_count") );
        if( this_player()->query("vote/id") == query("voting_id")
                && this_player()->query("vote/voted_option") )
                long += HIG "您已投票" NOR "\n";
        else    long += HIR "您未投票" NOR "\n";

        return long;
}

int do_setup( string arg )
{
        string item;
        string s_value;
        int d_value;

        if( !wizardp( this_player() ) )
                return notify_fail("只有巫师有权力更动投票专用马桶的设定.\n");

        if( !arg ) {
                write(@LONG
投票专用箱的设定值:

reset                   重新设定所有资料
desc    string          投票活动的叙述
id      string          投票活动的识别代码 ( 每次投票都要更改 )
final   int             最后提名时限, 以天数计
start   int             几天之后开始投票, 以天数计. ( 0 则马上开始 )
max_op  int             每人拥有的票数 ( 0 则不限票数 )
voting  int             是否开始投票. 0 则结束, 非零值则开始 ( 请最后设定 )
LONG
                );
                return 1;
        }
        sscanf( arg, "%s %s", item, s_value );
        if( item == "desc" ) {
                set("desc", s_value );
                write("设定此次投票的叙述为: " + s_value + "\n");
                save();
                return 1;
        } else if( item == "id" ) {
                set("voting_id", s_value );
                write("设定此次投票的识别码为: " + s_value + ".\n");
                save();
                return 1;
        }
        sscanf( arg, "%s %d", item, d_value );
        if( item == "final" ) {
                set("final_nominate_time", time() + d_value*24*60*60 );
                write( sprintf("设定此次投票的提名期限为 %d 天后.\n", d_value ) );
                save();
                return 1;
        } else if( item == "start" ) {
                set("voting_start_time", time() + d_value*24*60*60 );
                write( sprintf("设定此次投票于 %d 天后开始投票.\n", d_value ) );
                save();
                return 1;
        } else if( item == "max_op" ) {
                set("max_voter_option", d_value );
                write( sprintf("设定此次投票每人最高票数为: %d\n", d_value ) );
                save();
                return 1;
        } else if( item == "voting" ) {
                if( d_value )
                        set("voting_setup_time", time() );
                set("voting", d_value );
                write( sprintf("%s此次投票.\n", d_value ? "开启" : "关闭" ) );
                save();
                return 1;
        }
        if( arg == "reset" ) {
                delete("desc");
                delete("voting_id");
                delete("voting_setup_time");
                delete("voting_start_time");
                delete("final_nominate_time");
                delete("voting");
                delete("max_voter_option");
                delete("options");
                delete("ballots");
                delete("voters_count");
                write("清除投票专用箱的所有设定.\n");
                save();
                return 1;
        }

        return notify_fail("设定的项目不正确.\n");
}

int do_nominate( string arg )
{
        string *options;
        int *ballots;
        int *player_ballots;
        int i;
        int *new_array;

        options = query("options");
        ballots = query("ballots");
        player_ballots = this_player()->query("vote/ballots");

        if( sizeof( player_ballots ) == 0 )
                player_ballots = ({ });

        if( sizeof( options ) == 0 )
                options = ({ });
        if( sizeof( ballots ) == 0 )
                ballots = ({ });

        if( !query("voting") )
                return notify_fail("目前没有任何投票活动.\n");

        if( time() > query("final_nominate_time") )
                return notify_fail("提名已经截止了.\n" );

        if( !arg ) return notify_fail("请指定提名新选项的内容.\n");

        options += ({ arg });

        new_array = allocate( 1 );
        new_array[0] = 0;
        ballots += new_array;

        set("ballots", ballots );
        set("options", options );

        player_ballots += new_array;

        this_player()->set("vote/ballots", player_ballots );

        message_vision("$N " CYN "在" HIC "投票专用箱" NOR CYN "内丢入一张纸, 上面写着:\n" HIW + arg + NOR "\n", this_player() );

        save();
        return 1;
}

int do_vote( string arg )
{
        int *ballots;
        string *options;
        int voter_option, i;
        int *player_ballots;
        int *new_array;
        int voters_count, voted_option;
        string ppl_id;

        ppl_id=geteuid(this_player());
        if( !arg ) return notify_fail("请指定投票项目的号码.\n");

        if(this_player()->query("age") < 15)
          return notify_fail("你年纪太少不能投票!!!!\n");
        if(!userp(this_player()))
          return notify_fail("只能玩家能投票!!!\n");
        options = query("options");
        ballots = query("ballots");
        player_ballots = this_player()->query("vote/ballots");
        voters_count = query("voters_count");
        voted_option = this_player()->query("vote/voted_option");

        if( sizeof( player_ballots ) == 0 )
                player_ballots = ({ });

        sscanf( arg, "%d", voter_option );

        if( !query("voting") )
                return notify_fail("目前没有投票活动.\n");

        if( query("voting_start_time") > time() )
                return notify_fail("投票尚未开始.\n");

        if( !arg ) return notify_fail("请指定投票项目的号码.\n");

        sscanf( arg, "%d", voter_option );

        if( voter_option < 1 || voter_option > ( sizeof( ballots ) ) )
                return notify_fail("没有这个选项.\n");

        if( this_player()->query("vote/id") != query("voting_id") ) {
                this_player()->set("vote/id", query("voting_id") );
                this_player()->set("vote/voted_option", 0 );
                this_player()->set("vote/ballots", ({ }) );
        }
        if( sizeof( options ) > sizeof( player_ballots ) ) {
                new_array = allocate( ( i = sizeof( options ) - sizeof( player_ballots ) ) );
                new_array[i - 1] = 0;
                player_ballots += new_array;
                this_player()->set("vote/ballots", player_ballots );
        }

        if( this_player()->query("vote/voted_option")
                >= query("max_voter_option") && query("max_voter_option") > 0 )
                return notify_fail("您已经超过你可以投票的票数.\n");

        if(query("vote_player/"+ppl_id) < query("max_voter_option"))
          add("vote_player/"+ppl_id,1);
        else
          return notify_fail("你投超过了，一个人只能投"+CHINESE_D->chinese_number(query("max_voter_option"))+"次!!\n");

        if( player_ballots[ voter_option - 1 ] )
                return notify_fail("您已经投了此选项一票.\n");

        if(wizardp(this_player())){
        ballots[ voter_option - 1 ] +=10;
        player_ballots[ voter_option -1 ] = 10;
        }
        else{
        ballots[ voter_option - 1 ] ++;
        player_ballots[ voter_option -1 ] = 1;
        }
        set("ballots", ballots );

        if( this_player()->query("vote/voted_option") == 0 )
                set("voters_count", voters_count + 1 );
        voted_option ++;
        this_player()->set("vote/voted_option", voted_option );
        this_player()->set("vote/ballots", player_ballots );

        message_vision("$N " CYN "把一张选票扔进" HIC "三合一投票专用箱" NOR CYN "里." NOR "\n", this_player() );

        save();
        return 1;
}

int do_cancel( string arg )
{
        string *options;
        int *ballots;
        int voter_option, i;
        int *player_ballots;
        int *new_array;
        int voters_count;
        int voted_option;
        string ppl_id;

        ppl_id=geteuid(this_player());

        options = query("options");
        ballots = query("ballots");
        player_ballots = this_player()->query("vote/ballots");
        voters_count = query("voters_count");
        voted_option = this_player()->query("vote/voted_option");

        if( sizeof( player_ballots ) == 0 )
                player_ballots = ({ });

        if( !query("voting") )
                return notify_fail("目前没有投票活动.\n");

        if( query("voting_start_time") > time() )
                return notify_fail("投票尚未开始.\n");

        if( !arg ) return notify_fail("请指定取消投票项目的号码.\n");

        sscanf( arg, "%d", voter_option );

        if( voter_option < 1 || voter_option > ( sizeof( ballots ) + 1 ) )
                return notify_fail("没有这个选项.\n");

        if( sizeof( options ) > sizeof( player_ballots ) ) {
                new_array = allocate( i = sizeof( options ) - sizeof( player_ballots ) );
                new_array[i - 1] = 0;
                player_ballots += new_array;
                this_player()->set("vote/ballots", player_ballots );
        }

        if( this_player()->query("vote/id") != query("voting_id") ) {
                this_player()->set("vote/id", query("voting_id") );
                this_player()->set("vote/voted_option", 0 );
        }

        if( !player_ballots[ voter_option - 1 ] )
                return notify_fail("您并没有投此选项一票.\n");

        if(query("vote_player/"+ppl_id))
          add("vote_player/"+ppl_id,-1);

        if(wizardp(this_player())){
        ballots[ voter_option - 1 ] -=10;
        player_ballots[ voter_option -1 ] = 0;
        }
        else{
        ballots[ voter_option - 1 ] --;
        player_ballots[ voter_option -1 ] = 0;
        }
        set("ballots", ballots );
        voted_option --;

        this_player()->set("vote/voted_option", voted_option );
        this_player()->set("vote/ballots", player_ballots );

        if( this_player()->query("vote/voted_option") == 0 )
                set("voters_count", voters_count - 1 );

        message_vision("$N " CYN "把一张选票丢进" HIC "投票专用箱" NOR CYN "里消掉了." NOR "\n", this_player() );

        save();
        return 1;
}

int do_statistics( string arg )
{
        string *options;
        int *ballots;
        int i;
        string stat;
        string save, file;
    object me=this_player();

    if(!wizardp(me)) return 0;

        if( !query("voting") )
                return notify_fail("目前没有任何投票活动.\n");

        options = query("options");
        ballots = query("ballots");

        stat = HIW " <目前投票统计>" NOR "\n";

        if( !arg ) {
                for( i = 0; i < sizeof( options ); i ++ ) {
                        stat += sprintf(" (" CYN "%2d" NOR ") " GRN "[" HIW "%4d " GRN "票] " NOR "%s\n", i + 1, ballots[i], options[i] );
                }

                write( stat );
                message_vision("$N " CYN "打开" HIC "投票专用箱" NOR CYN "偷看选票." NOR "\n", this_player() );

                return 1;
        }

        if( arg == "save" ) file = "u/a/anmy/ballot_stat";
        else sscanf( arg, "save %s", file );

        if( wizardp( this_player() ) ) {
                stat += query("desc") + "\n";
                stat += HIW " <提名状况> " HIG "[开始时间] " NOR + ctime( query("voting_setup_time") ) + "\n";
                stat += "            " HIG "[截止时间] " NOR + ctime( query("final_nominate_time") ) + "\n";
                stat += "            " + ( time() < query("final_nominate_time") ? HIG "提名中" NOR "\n" : HIR "提名截止" NOR "\n" );

                if( query("max_voter_option") == 0 )
                        stat += HIW " <投票状态> " HIC "不限票数\n";
                else
                        stat += sprintf(HIW " <投票状态> " HIC "每人最高票数: " NOR "%s\n", query("max_voter_option")
                                ? sprintf("%d", query("max_voter_option")) : "不限票数" );

                stat += HIW " <目前选项>" NOR "\n";

                for( i = 0; i < sizeof( options ); i ++ ) {
                        stat += sprintf(" (" CYN "%2d" NOR ") " GRN "[" HIW "%4d " GRN "票] " NOR "%s\n", i + 1, ballots[i], options[i] );
                }

                stat += HIW " <投票情形>" NOR "\n";
                stat += sprintf(HIC "  %d 投票人次\n" NOR, query("voters_count") );

                write_file( file, stat );
                write("目前的投票统计结果已存入: "+ file +"\n");
                return 1;
        } else return notify_fail("stat 的参数不正确.\n");
        return 1;
}
