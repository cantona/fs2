// summon command..
// Closed by wade Tue Sep 26 1995

inherit F_CLEAN_UP;

int main(object me, string str)
{
  object ob;
  string wiz;

  ob = LOGIN_D->find_body(str);
  if (!ob) return notify_fail("咦... 有这个人吗?\n");
  wiz = (string)wizhood (me);
  // 请勿随便 summon 别人
  if ( (!wizardp(ob) && ob->query("id")!="guest" && wiz_level(me)<4) || wiz_level (me) < wiz_level (ob) )
    return notify_fail ("【系统】: 随便 Summon 别人是不礼貌的, 还是用 goto 吧!!\n");
  else {
        if (!str) return notify_fail("语法: summon <玩家的英文名>\n");
        ob = LOGIN_D->find_body(str);
        if (!ob) return notify_fail("咦... 有这个人吗?\n");
        // moving
        if (environment(ob)) {
          log_file("static/SUMMON",
          sprintf ("%s - 抓 - <%s>\n%s -- 抓到 --> %s\n%s\n\n",
                me->short(), ob->short(),
                file_name(environment(ob)),
                file_name(environment(me)),
                ctime(time())));
          tell_room(environment(ob),"天空中伸出一只大手把"+
          (string)ob->query("name")+"抓了起来, 然后不见了.\n", ob);
        }
        tell_object(ob,"一只手把你抓了起来, 你眼前一阵黑....\n");
        ob->move(environment(me));
        tell_object(me, "你把"+(string)ob->query("name")+"抓到你的面前.\n");
        tell_object(ob,".... 醒来时发现是"+(string)me->query("name")+
        "把你弄过来的.\n");
        tell_room(environment(ob),(string)ob->query("name")+"突然出现"+
        "在你眼前\n",({me,ob}));
        // ok ..
        return 1;
  }
}

