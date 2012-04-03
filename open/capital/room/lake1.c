// Room: /open/capital/room/lake1
inherit ROOM;

void create ()
{
  set ("short", "湖边小径");
  set ("long", @LONG
杂草丛生的小路，地面的石板缝里都长满了杂草。前面有一座凉亭
，依希看得到亭里的人影。这离湖很近，看着平静无波的湖面不禁有海
阔天空的感觉。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r24",
  "east" : __DIR__"lake2",
]));
  set("outdoors", "/open/capital");

  setup();
}
