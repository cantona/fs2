inherit NPC;
inherit F_SAVE;

mapping quest_list = ([]);
string do_ask (object me);
string do_quests (object me);

void create()
{
  // set("race", "机器人");
  set_name("任务问答机", ({ "quests man1", "man1" }) );
  restore();
  set ("inquiry", ([
       "quests" : (: do_quests :),
  ]) );

  quest_list = query("quests");
  setup();
}

// 传回所有任务的英文字串
string do_quests (object me)
{
  string	*quests_name;
  string	line;
  int		i;

  line = "目前狂想空间共有 \n";

  if (!mapp (quest_list) || sizeof (quest_list) == 0)
    return "目前狂想空间没有任何任务\n";

  quests_name = keys (quest_list);
  for (i=0; i<sizeof (quest_list); i++)
     line += sprintf ("第%2d个 : %20s %s\n", i+1, quests_name[i],
             quest_list[quests_name[i]]);
  return line;
}

void remove(object ob) { save(); }

string query_save_file() { return QUEST; }

// 删除一件任务
int delete_quest (string quest)
{
  if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  // 从 quest_list 删除一个 quest
  map_delete(quest_list, quest);

  save();
  return 1;
}

// 安装一个 quest
int install_quest (string quest, string chinese)
{
  if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  quest_list[quest] = chinese;

  save();
  return 1;
}

// 传回所有任务的英文字串
string *query_quests ()
{
  if (!undefinedp (keys(quest_list)))
    return keys(quest_list);
  else return ({});
}

//  用英文字串求中文名称
string quest_chinese (string quest)
{
  if (strsrch (quest, "quests/") == -1) quest = "quests/"+quest;
  if ( !undefinedp(quest_list[quest]) )
    return quest_list[quest];
  else return "";
}

// 设定玩家已经完成某一个 quest 到第几步
int set_quest (object ob, string quest, int step)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  ob->set(quest, step);

  return 1;
}

// 查询玩家已经完成某一个 quest 到第几步
int query_quest (object ob, string quest)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  return (ob->query (quest));
}

// 设定某玩家已经完成一个任务
int set_finish_quest (object ob, string quest)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  if (!ob->query(quest)) return 0;
  ob->set(quest, -1);
  return 1;
}

// 查询是否完成一个任务
int query_finish_quest (object ob, string quest)
{
  if (!ob) return 0;
  if (strsrch(quest, "quests/") == -1) quest = "quests/"+quest;
  if (quest_list[quest] == "") return 0;
  if (ob->query(quest) == -1) return 1;
  else return 0;
}

// 传回整个任务的 mapping
mapping query_quests_ob()
{
  if ( !undefinedp (quest_list) ) return quest_list;
  else return ([]);
}

// 求已完成 quests 个数
int query_n_f_quests (object ob)
{
  int           i, c;

  if (!ob) return 0;
  for (i=c=0; i<sizeof(quest_list); i++)
    if (ob->query_finish_quest (keys(quest_list)[i])) c++;
  return c;
}

// 用索引值取回中文任务名称
string query_quest_cname (int idx)
{
  if (idx >= sizeof (quest_list)) return "";
  if (!undefinedp(quest_list)) return quest_list[keys(quest_list)[idx]];
  else return "";
}

// 用索引值取回英文任务名称
string query_quest_name (int idx)
{
  if (idx >= sizeof (quest_list)) return "";
  if (!undefinedp(quest_list)) return keys(quest_list)[idx];
  else return "";
}
