// Room: /open/ping/room/west
inherit ROOM;

void create()
{
  set ("short", "悬空吊桥");
  set ("long", @LONG
你走上了一座吊桥,澜沧江就在你的脚下,河面上一团团白雾
罩在滚滚江流之上,阳光照得江水金蛇乱舞,放眼不尽,令人胸怀
大畅.
LONG);

  set("outdoors", "/open/ping");
  setup();
}
