inherit COMBINED_ITEM;
void create()
{
        set_name("人蔘伏灵露", ({"seng pill","pill"}) );
        set("long",
        "此物乃经过医者精湛的医术所炼制,食用后可恢复少许内力.\n");
        set("unit", "盒");
        set("base_unit","颗");
        set("no_sell",1);
        set("value",2500);
        set("base_weight", 50);
        set_amount(1);
        setup();
}
void init()
{
        if( this_player()==environment() )
        {
                add_action("eat_pill", "eat");
        }
}
int eat_pill(string arg)
{

        object ob,me=this_player();
        int max_force,force;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
        message_vision("$N吃下一颗人蔘伏灵露.\n", me);
        max_force = me->query("max_force");
        force = me->query("force");
        force = force + 200;
        if( force > max_force )
            force = max_force;
        me->set("force",force);
        add_amount(-1);
        return 1;
}


