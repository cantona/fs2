inherit NPC;
 
void create()
{
        set_name("����Сɮ",({"soulin monk","monk"}));
        set("long","һ��Ŭ��������С���У�����������Ϊ��׳ .\n");
        set("gender","����");
        set("combat_exp",10000);
        set("attitude","peaceful");
        set("age",22);
        set("class","soldier");
        set_skill("unarmed",45);
        set_skill("dodge",30);
        set_skill("parry",40);
        set("chat_chance",10);
        set("chat_msg",({
        }));
        setup();
        add_money("silver",1);
}