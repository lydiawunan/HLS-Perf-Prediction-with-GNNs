#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 904482560
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, short p_7, int p_13)
{
  long long v_15;
  long v_11;
  signed char v_9;
  char v_5;
  unsigned long v;
  unsigned short result;
  v_11 = (long)p;
  v_9 = (signed char)89;
  v_5 = (char)31;
  v = (unsigned long)p_7;
  result = p;
  v_5 = (char)(- ((long)(p_13 % ((int)v_5 + 527)) % (((long)p_13 + v_11) + 882L)));
  while (v * (unsigned long)((int)p % ((int)v_5 * (int)((char)-2108513920.f) + 10)) >= (unsigned long)(
         (long)(~ p_7) - 45009L)) {
    v_15 = (long long)v_11 / ((long long)v_9 % -373355087LL + 947LL);
    v_9 = (signed char)((long long)(p_13 - p_13) - ((v_15 | (long long)p) + (long long)(
                                                    (unsigned int)p_13 / 9359166U)));
    v = (unsigned long)p_7;
    v = - ((unsigned long)p + v % (unsigned long)(p_13 + 132));
  }
  while_0_break: ;
  return result;
}


