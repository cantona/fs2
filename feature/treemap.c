#pragma save_binary

// 本档案是 TMI-2 的一部份, 如果您要使用本档案, 请保留本说明
// 本档由 Buddha@TMI 所写, modularized and revised (92-05-01)
// 由 Buddha (92-05-31) 增加保密系统 PS: 由 Annihilator 拿掉了
// 暂时性的变数由 Watcher (93-02-21) 所写
// 由 Pallando @ Tabor (93-03-17) 改写过
// 把 _set() 的传回值改为所设定的值, 由 Annihilator (95-03-15) 改写
// NB these functions don't have to be nomask if you prevent objects shadowing
// them in the same circumstances that shadowing query is not allowed.
// 由 wade@Fantasy.Space 改写, 将递回改成非递回, 增加速度. (1996-6-2)

static nomask /* private */ mixed _query (mapping map, string *parts)
{
  mixed value;
  int i;

  value = map;
  for (i=0 ; i < sizeof(parts); i++) {
    if (undefinedp (value = value[parts[i]]))
      break;
    if( !mapp (value))
      break;
  }
  return value;
}

// 将递回改成非递回, by wade@Fantasy.Space 1996/6/2
static nomask /* private */ int _delete (mapping map, string *parts)
{
  mixed value;
  int i;

  value = map;
  for (i=0; i<sizeof(parts)-1; i++) {
    if (undefinedp (value=value[parts[i]]))
      return 0;
    if (!mapp(value))
      return 0;
  }
  if (!mapp(value))
    return 0;
  map_delete(value, parts[i]);
  return 1;
}

// 把递回改成非递回, 由 wade@Fantasy.Space 所改写 (1996/6/2)
static nomask /* private */ mixed _set (mapping map, string *parts, mixed value)
{
  mixed sub;
  int i;

  sub = map;
  for (i=0; i<sizeof(parts)-1; i++) {
    if (!sub[parts[i]] || !mapp (sub[parts[i]]))
      sub[parts[i]] = ([ parts[i+1] : 0 ]);
    sub = sub[parts[i]];
  }
  return sub[parts[i]] = value;
}
