inherit ROOM;

void create()
{
 set("short","绝顶");
 set("long",@LONG
  这里是太君山绝顶，此处长年下着大雪，所以放眼望去一
  片白蒙蒙的啥也看不到。你看见在你附近有个人坐在雪地
  上，吃着热腾腾的叫化鸡且喝着冷酒，此人是否有些异常
  呢？实在是有点可疑喔.....
  
  
LONG);
 set("exits",([
 "down" : __DIR__"room18.c",
]));


setup();
}
