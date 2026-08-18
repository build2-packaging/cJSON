#include <cjson/cJSON.h>
#include <cjson/cJSON_Utils.h>

#include <stdlib.h>
#include <string.h>

#undef NDEBUG
#include <assert.h>

int main (void)
{
  const char *version;
  cJSON *o;
  cJSON *a;
  char *s;

  version = cJSON_Version ();
  assert (version != NULL);
  assert (strstr (version, "1.7.19") != NULL);

  o = cJSON_Parse ("{\"a\":1}");
  assert (o != NULL);
  assert (cJSON_IsObject (o));

  s = cJSON_PrintUnformatted (o);
  assert (s != NULL);
  assert (strcmp (s, "{\"a\":1}") == 0);
  free (s);

  a = cJSONUtils_GetPointer (o, "/a");
  assert (a != NULL);
  assert (cJSON_IsNumber (a));
  assert (a->valuedouble == 1.0);

  cJSON_Delete (o);
  return 0;
}
