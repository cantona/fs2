// Room: /open/death/watchtower
inherit ROOM;

void create()
{
  set ("short", "望乡台");
  set ("long", @LONG
你现在站在第三殿宋帝王所辖的望乡台上，这里是阴间唯一可看到
阳间的地方，此处占满了死后却还怀念着阳间亲人的鬼魂，台上刻着‘
登台遥望旧家乡’。
LONG);

  set("light_up", 1);
  set("outdoors", "/open/death");
  setup();
}
