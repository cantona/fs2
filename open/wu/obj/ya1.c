#include <weapon.h>
  inherit ITEM;
void create()
{
set_name("叶  狂",({"ya"}));
set("unit","位");
set("long","这是四大恶人的师父‘嗜血狂魔’叶狂，
   三十年前无恶不做的他，在武林中腥风血雨，最后
   被泷山派第五代掌门任溥文打败并锁在寒冰地牢中
   不见天日\n");
  set("no_get",1);                    
        setup();
}
