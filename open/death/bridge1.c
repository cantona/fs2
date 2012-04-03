// Room: /open/death/bridge1.c

inherit ROOM;

void create ()
{
  set ("short", "奈何桥头");
  set ("long", @LONG
再往前去就是奈何桥了，过了奈何桥就不能再回头了，难道果真人生
没有不死的传说吗！？只见一团团的鬼影往奈何桥上走去，似乎除了转世
投胎之外，已经无路可走了。每个鬼同志的脸色又恐慌又匆忙，仿佛害怕
接受死后的审判，又怕太晚去轮回找不到好位置，还是赶快上路吧！！
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"start",
  "north" : __DIR__"bridge2",
]));
  set("light_up", 1);
   set("no_auc",1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

  setup();
}
