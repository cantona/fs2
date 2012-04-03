// Room: /open/dancer/room/roomse4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short",GRN"凉亭"NOR);
  set ("long", @LONG
站在此地你感到阵阵凉风吹来，令人心旷神怡，凉亭的东边是一
山堐视野广阔可望到海洋，海景山色一望无穷，禁收眼底。令你不禁
想终生归隐此处不再理江湖是非。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/dancer/room/roomse3.c",

]));

  set("light_up", 1);

  setup();
}
