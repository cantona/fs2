inherit ROOM;

void create ()
{
  set ("short", "空房间");
  set("long", @LONG_DESC

// 这是一间户外的空房间的写法, 程式从底下的 inherit 开始
// 底下这一行是继承基本房间的写法, 通常都可以从 /include/*.h 查到线索
inherit ROOM;

void create ()
{
  set ("short", "空房间");
  set ("long", @LONG
这是一间什么都没有的房间。
LONG);

  // 如果是室内, 请把底下这行拿掉
  set("outdoors", "/u/w");
  setup();
}
// 一直到这一行结束
// 请继续往东走...
LONG_DESC);

  setup();
}

void init()
{
  add_action("e", "e");
  add_action("e", "east");
  add_action("go", "go");
}

int e()
{
  this_player()->move("/u/w/wade/workroom");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move("/u/w/wade/workroom");
  return 1;
}
