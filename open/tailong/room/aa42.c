inherit ROOM;

void create ()
{
  set ("short", "大雄宝殿");
  set ("long", @LONG
在这里的正中央,有一座释迦牟尼佛雕像(budda statue),也就是天
龙寺的大佛,听说向这尊佛像祈祷(pray)能有平息杀意的功用,不知是
真是假,你不妨试试看。
LONG);

 set("item_desc", ([ /* sizeof() == 1 */
"budda statue" : "
这是天龙寺的大佛像,周围发散出金光,看着它你觉得自己好像
身处西方极乐世界一样..................................
这尊大佛是一位朱姓和尚以自己的面貌来铸造的, 你一看到就
有一种想扁他的感觉......
",
]));


  set("exits", ([ /* sizeof() ==  */
  "east" : __DIR__"aa43",
  "south" : __DIR__"aa39",
  "west" : __DIR__"aa41",
]));
}
