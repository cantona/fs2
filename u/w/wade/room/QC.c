inherit ROOM;

void create ()
{
  set ("short", "程式的品质");
  set("long", @LONG
□ 程式码
	程式码必须缩排整齐, 由区域的负责巫师统一
	每个程式在放到 /open 底下时, 必须做到没有任何 编译时段错误
	每个参考的档案路径, 必须是相对路径, 可以用 #include, 或者
	是用 #define 定义在该档的前头, 也可以是 __DIR__, __FILE__
	所有在 /open 下的档, 所引用的物件档不能是放在私人目录下.
    □ 使用者界面
	所有的讯息必须由玩家的角度出发, 以免造成盲点.
	景物或物品的设置必须合理, 例如重量或者是布置的位置等, 描述
	的叙述应该力求精致.
    □ 风格
	这里的风格由区域负责巫师塑造, 在不影响平衡的条件之下, 各个
	区域应该拥有自己的特色, 没有特色的区域, 视为不良品.
LONG);

  set("exits", ([
	"back"	: __DIR__"wiz",
  ]) );

  set("light_up",1);
  setup();
}
