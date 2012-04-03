inherit ROOM;

void create ()
{
  set ("short", "LPC 说明 -- 基本 LPC 程式 --");
  set("long", @LONG
LONG);

  set("exits", ([
	"mudlib": __DIR__"mudlib",
	"driver": __DIR__"driver",
	"area"	: __DIR__"area",
	"object": __DIR__"object",
	"back"	: "/u/w/wade/workroom",
  ]) );
  setup();
}
