#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175688593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p[3][3][3], long p_4, long long p_13, unsigned short p_15)
{
  signed char v_21;
  unsigned char v_19;
  char v_17;
  char v_11;
  long v_9;
  unsigned long v_7;
  unsigned long v;
  short result;
  v_21 = (signed char)p_15;
  v_19 = (unsigned char)28;
  v_17 = (char)58;
  v_11 = (char)-85;
  v_9 = 34194L;
  v_7 = 728150262UL;
  v = 4294950209UL;
  result = (short)19943;
  while (88LL % ((long long)(! v_7) % (((long long)p_4 + -821827140LL) + 501LL) + 701LL) < (long long)(
         59570UL % ((v + (unsigned long)v_11) + 261UL) | 8790UL)) {
    v_9 = (int)v_21 - (int)v_19 % -35347;
    v_19 = (unsigned char)((long)(56 % ((int)((signed char)3.23971340099e+38) + 539)) + 
                           - p_4 / ((long)1.11260972206e+36f + 807L));
    v = (unsigned long)(~ (((unsigned long long)-874.269659357 - 18446744073709512745ULL) & (unsigned long long)(! p_4)));
    v_11 = (char)p_15;
  }
  while_0_break: ;
  while ((unsigned long)(! p[1][1][0]) == (unsigned long)p_4 * (v ^ v_7)) {
    v_9 = ! ((long)((int)v_17 * (int)v_11) + v_9);
    result = (short)((long long)(~ v_11) | p_13 * (long long)(! p_15));
    v = v_7;
  }
  while_0_break_0: ;
  return result;
}


