inherit ITEM;
inherit F_AUTOLOAD;
inherit F_SAVE;

void create()
{
	set_name("超级坏蛋执照", ({ "badman license", "license" }) );
	set("unit", "张");
	set ("no_get", 1);
	set ("no_drop", 1);
	setup();
}

string long()
{
  return @TEXT
    拥有坏蛋证明的人才能顺利的进入恶人谷而不受到骚扰。
TEXT;
}

int query_autoload ()
{
  return 1;
}
