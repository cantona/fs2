// torch

inherit ITEM;

void create()
{
        set_name("木头", ({ "torch", }) );
        set("unit", "根");
        set("long", "一根可以当材烧的木头。\n");
	// light_up 大于 0 表示可以燃烧的心跳数
	set ("light_up", 1000);
	set("value", 10);
}

void init()
{
  add_action("ip", "ip");
}

int ip(string arg)
{
  string	okip = "140.122.*";
  string	ip1, ip2, ip3, ip4, ip5;

  sscanf (okip, "%s.%s", ip1, ip2);
  printf ("的连线位址是 %s : %s\n", ip1, ip2);
  return 1;
}
