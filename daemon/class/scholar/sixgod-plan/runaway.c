// By Swy 最后修正 QC 98/6/20
#include <ansi.h>
int perform(object me,object target)
{
	mapping exit = environment( me )->query("exits");
	string *dirs;
	int i;
        if(!me->is_fighting(target))
		return notify_fail("三十六计只能在战斗中使用。\n");
	if( me->query("sen") < 5 ) 
		return notify_fail("你的精神不够集中，无法使用三十六计。\n");
// 不是儒门
   if( me->query("family/family_name") != "儒门")
    return notify_fail("不是儒生，不给你用咧！！^_^\n");
	if( !exit ) return notify_fail("这里无处可逃！\n");
	me->add("sen",-5);
        me->add("gin",-50);
if(80>random(100)) {
	message_vision( HIY + @LONG
$N见情势不利，使用第三十六计，离开了现场！
LONG + NOR , me );
	dirs = keys( exit );
	i = random( sizeof(dirs) );
	load_object( exit[dirs[i]] );
	me->move( exit[dirs[i]] );
} else {
        message_vision( HIW + @LONG
$N见情势不利，使用第三十六计，但被敌人识破了！
LONG + NOR , me );
       me->start_busy(1);
}
        return 1;
}

