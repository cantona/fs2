// beck.c

inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set("no_get", 1);
	set_name("水井",({"well"}) );
	set("long","一口样式古朴的水井。\n");
	set("饱和",50);
	set("液体", ([
		"种类": "水",
		"名称": "清水",
		"剩": 300,
		"止渴" : 30,
		"drink_func":0,
	]) );
	setup();
}
