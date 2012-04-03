// Room: /u/p/powell/room/r1.c

inherit ROOM;

void create ()
{
  set ("short", "大马路");
  set ("long", @LONG
这是一条笔直的大马路, 往北可以通到北边神秘的沙漠王国,
南边是中央驿站的大广场, 东边是一家骆驮行, 要往沙漠王国的商
旅可以在那儿买到你想要的上等货色. 西边则是一家妓院, 大概是
为了疏解旅途困顿而设的吧? 竟然常常客满哩.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/main/room/r19",
  "west" : "/open/center/room/gstore",
  "south" : "/open/trans/room/room4",
  "east" : "/open/center/room/loto",
]));

  set("outdoors", "/open/main");

  setup();
}
// by babe 防止 mob 进入                   
int valid_leave( object me, string dir )   
{                                          
        if( dir=="south" && !userp(me) )    
                return 0;                  
                                           
        return ::valid_leave( me, dir );   
}                                          

