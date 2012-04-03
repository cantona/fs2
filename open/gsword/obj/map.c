inherit "/obj/book";

#define BOOK_PATH "/open/gsword/obj/"
#define BOOK_NAME "map"
#define C_BOOK_NAME "蜀中地图"

void create()
{
  ::create();
  set_name( C_BOOK_NAME, ({ "map" }) );
  set("long", "一张蜀中城的地图,你可以读读它(read map).\n"
  );
  set("value", 10 );
  set ( "book_path", BOOK_PATH + BOOK_NAME );
  setup();
}
