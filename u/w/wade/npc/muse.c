#define WADE "/u/w/wade/npc/"
#define NAME "muse"
#define CNAME "妙妙"
#define SEX "女性"

inherit NPC;

void init()
{
    add_action("money", "ask");
}

void create()
{
        set_name( CNAME, ({ NAME }) );
        set("long",
"    你正盯着一位令人神魂颠倒的奇女子，当你第一眼看到她的时候，\n"+
"心中醋劲一发不可收拾，恨不相逢未...........\n"+
"如果你是她的爱人，你可以用 order_"NAME" <commands> 跟她沟通。\n"
        );
        set ( "gender", SEX );
        set("prevent_give_money", 1);
        // set("tactic_func", "call_help");
        set ( "have_partner", 0 );
        set("msg_min", "$N用优雅的步子走了过来。");
        set("msg_mout", "$N用优雅的步子走开。");
  setup();
}

int money (string arg)
{
  object money;

  if (!arg) {
    write ("妙妙说道：你在问什么啊！\n");
    return 1;
  }
  if (arg == "muse 妳就这样离开 wade 吗??") {
    if (this_object()->query_temp(this_player()->query("id")+"/money") > 5) {
      say ("妙妙说：问太多次会令人讨厌哦！\n");
      return 1;
    }
    else {
      say ("妙妙说：好问题，先给你一些路费，你自己去问 wade 吧！\n");
      if (money = new("/obj/money/gold")) {
        this_object()->add_temp(this_player()->query("id")+"/money",1);
        money->set_amount (150);
        money->move (this_player());
        return 1; 
      }
      else {
  	write ("妙妙说道：钱没了。\n");
	return 1;
      }
    }
  }
}
