inherit ROOM;
void create() {
	set( "short", "雾之林" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room168",
		"east"      : "/open/clan/13_luck/room/room182.c",
	]) );
	set( "long", @LONG

　　穿过倒塌的树干，走进了一大片的树林中，谜样般的森林，终年
浓雾不散，眼前只见白茫茫的一大片，伸手不见五指。风吹的树木沙
沙作响，看起来有种阴森森的诡异气氛，路旁的灌木丛中似乎有东西
在动，你心想该不会有什么毒蛇猛兽吧！

LONG);
	setup();
	replace_program(ROOM);
}
