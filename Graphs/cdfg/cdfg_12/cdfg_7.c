#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796774353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long long p_5, unsigned int p_7,
          signed char p_15[4][2][5], signed char p_17[2])
{
  unsigned long v_27;
  signed char v_25;
  short v_23;
  short v_21;
  long v_19;
  float v_13;
  short v_11;
  char v_9;
  unsigned char v;
  short result;
  v_27 = (unsigned long)p;
  v_25 = (signed char)-107;
  v_23 = (short)-21285;
  v_21 = (short)29054;
  v_19 = -52800L;
  v_11 = (short)738;
  v = (unsigned char)40;
  result = (short)27583;
  if ((unsigned long)(! (- (80 - (int)p))) <= v_27) {
    v_9 = (char)((unsigned long)(~ p_7) * ((unsigned long)((int)p + (int)v_23) ^ (
                                           (unsigned long)v_25 + v_27)));
    v = (unsigned char)p_17[0];
    v_13 = (float)(~ ((int)p_15[1][0][1] % ((int)p + 701) + (int)p_17[1] / (
                                                            (int)p_15[2][0][1] + 934)));
  }
  else {
    v_13 = (float)(! (! ((int)p - (int)v_21)));
    v_9 = (char)(- ((unsigned long)(14742 / ((int)p_17[1] + 995)) % (
                    (unsigned long)v_19 % (v_27 + 216UL) + 859UL)));
    v_9 = v_9;
  }
  while ((unsigned long long)((unsigned int)p + 770307824U) * (((unsigned long long)v - p_5) << (
                                                               (unsigned int)p % (
                                                               p_7 + 526U) & 63U)) <= (unsigned long long)(! (! v_9))) {
    result = v_13 - (float)((unsigned long)v_11 | 3908325897UL);
    v_9 = (char)(p_5 + (unsigned long long)(v_19 << ((unsigned long)v_21 * 18358UL & 31UL)));
    v_13 = (float)(18446744073709493056ULL - ((unsigned long long)((int)p_17[1] + 20768) + 889841076ULL));
    v = (unsigned char)((unsigned long long)p_15[1][0][4] * (p_5 / (~ p_5 + 12ULL)));
  }
  while_0_break: ;
  return result;
}


