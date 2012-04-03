inherit ROOM;

void create ()
{
  set ("short", "LPC 说明之 简介 -- object");
  set("long", @LONG

一个物件可以是 房间, 武器, 生物, 玩家等等, 更重要的, 每一个有 .c 附
加档名的档案就是一个物件. 通常, 物件有不同的使用法, 以 /std/living.c
为例, 它们是由其他程式继承用的, 如 monster.c, user.c 等.
其它的方法就是称为复制, 意思是说, 把那个档的物件再载入一份到记忆体中.
LONG);

  set("exits", ([
	"back"	: __DIR__"doc",
  ]) );
  setup();
}
