//小师妹
#include <command.h>
 
inherit NPC;
string ask_where()
{
    object who=this_player();
    if(who->query_temp("go_kill",1) )
    {
    who->delete_temp("go_kill");
    who->set_temp("will_kill",1);
    return("她现在隐藏身份躲在圣火教之内..不过是在那一个支门我就不便说明了...\n
    她身上很喜欢带着一支玉鐕!!\n");
    }
}

void create()
{
    set_name("小师妹",({"sister"}));
    set("title", "秦忆诗的");
    set("gender", "女性");
    set("age",23);
    set("attitude","friendly");
    set("long",@LONG

        她是玉女剑派的弟子, 当初因为其师姐陆绮芙的密谋夺书之事, 
        与另一位师姐秦忆诗远奔西域躲避.........

LONG);
 
    set("combat_exp",122000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",500);
    set("kee",500);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("dodge",40);
    set_skill("move",40);
    set_skill("parry",40);
    set_skill("sword",40);
    set_skill("henma-steps",40);
    set_skill("girlsword",40);
    set_skill("holy-force",40);
    map_skill("move","henma-steps");
    map_skill("force", "fireforce");
    map_skill("sword", "girlsword");
    map_skill("dodge", "henma-steps");
    map_skill("parry", "girlsword");
    set("chat_chance",30);
    set("chat_msg", ({
        "[36m武林万物～皆为生而轮回～!!\n\n"
        "[36m百家兵器～独本剑得精髓～[0m!!\n\n",
    }) );
    set("inquiry",([
    "玉女派":"玉女派是中原的一个小门派, 可是剑法乃是高人所创!!\n",
    "剑谱":"剑谱我不知道藏在那里!!不过掌门佩剑[31m[红炘剑][0m我知道是放在师姐的房间里喔!!\n",
    "陆绮芙":"哼!!那个阴险的小人, 害我们有门回不得!!我知道她现在也[32m躲起来[0m了..\n",
    "躲起来":(: ask_where :),
 ]));
    setup();
}


