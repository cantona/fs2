inherit ROOM;

void create ()
{
  seteuid(getuid());
  set ("short", "血魔殿");
  set ("long", @LONG
此地随处可见遍地断墙残壁....实在很难想像是当初轰动一时的天魔转世体
血魔的宫殿，只见这里除了一道道的的符咒之外...在角落你可看到一摊奇形怪状
的血渍(blood).....似乎有着一些秘密....
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "blood" : " 一滩奇形怪状的血渍",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room1/blood/room3/r3.c",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "blood" : "你仔细看了这滩血渍，赫然发现血渍竟然被一道到符咒(taoistfigure)为在中央并在符咒中蠢蠢欲动..似乎在较你撕开(tear)它。\n",

]));
  setup();
}
void init()
{
 add_action("do_tear","tear");
}
int do_tear(string str)
{
  object ob,ob1;
  ob=this_player();
  if( str!="taoistfigure")
    return notify_fail("撕符咒啦....你天兵欧...!!\n");
  if(ob->query_temp("blood1")!=1)
    return notify_fail("吃大便去...没开封印也想解...!!\n");
  if(ob->query_temp("killtiger")!=1 && ob->query_temp("killdragon")!=1)
    return notify_fail("没完全解迷也想来放血魔...你找死ㄚ...!!!\n");
message_vision("[1;36m你一张一张的撕开贴在血渍上方的符咒[0m...\n ",ob);
    ob->set("swordplus",1);
  ob->set("bloodsword",1);
  ob->delete_temp("killtiger");
  ob->delete_temp("killdragon");
  ob->delete_temp("blood1");
log_file("sword/broken",sprintf("%s(%s) 解放血魔 on %s\n",ob->query("name"),ob->query("id"),ctime(time()) ));


  call_out("msg1",3,ob);
  return 1;

}

int msg1(object ob)
{
 message_vision("\n",ob);
 message_vision("[1;31m血渍渐渐产生血光...并一步一步的组成人形[0m..\n",ob);
  call_out("msg2",3,ob);
  return 1;
}

int msg2(object ob)
{
  object ob1;

  message_vision("[32m突然...一道道无与伦比的魔气由四面八方射入削人中...吓得$N站不直[0m..\n",ob);

  message_vision("[1;35m血魔道: 小鬼....实在是太感谢你了.我总算出封印了[0m.\n",ob);
  message_vision("[1;31m到绿毛老祖的石雕像那来找我吧..(blood)我暂时会在那..[0m\n",ob);
  message_vision("[1;31m只觉一道血光划过眼前....血魔已经消失无踪了[0m...\n",ob);
   this_player()->move ("/open/gsword/room/g6-5.c");
   this_player()->set("title","[1;33m仙剑剑侠--(暗藏魔气)--[0m");
  message("mud","[1;37m一阵阵开天辟地的笑声自蜀山奇阵中传出[0m..\n\n\n",users());

  message("mud","[1;31m血魔[1;37m狂叫道: \n
      哈 哈 哈......封印多年...总算有人来把我放出去啦~~~真是好样的
      逍遥子、风青云你们给看着吧...我会找你们报仇的    
[1;31m          我  的  子  弟  们  将  血  洗  武  林  [0m\n ",users());
  call_out("msg3",3,ob);
return 1;

}

int msg3(object ob)
{
  message("mud","[1;35m郑士欣叹道:\n

     天~~~师祖与师叔的封印被破....唉~~想不到仙剑竟然有叛徒

           天佑仙剑.就请师祖们再次显灵了[0m....\n",users());

  return 1;
}
