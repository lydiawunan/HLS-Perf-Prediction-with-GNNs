#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844413708
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p[4][4], unsigned short p_4,
                   signed char p_7[3], short p_9, unsigned long p_15)
{
  char v_27;
  unsigned char v_25;
  long long v_23;
  unsigned char v_21;
  long long v_19;
  char v_17;
  unsigned long long v_13;
  short v_11;
  int v;
  unsigned short result;
  v_25 = (unsigned char)p_4;
  v_23 = -38273LL;
  v_21 = (unsigned char)58;
  v_19 = 22133LL;
  v_17 = (char)p[0][2];
  v = 1040999917;
  result = (unsigned short)64406;
  while (! (! v_19) > (long long)(! v_21) + (v_19 ^ v_23) * (long long)(
                                            p_15 / (unsigned long)((int)p_9 + 584))) {
    v_27 = (int)v_25 + (int)((unsigned char)442.869812012f);
    v_17 = (char)(- (-1415518502LL - ((long long)v_27 + v_23)));
    v_21 = (unsigned char)(- ((p_15 & (unsigned long)p_7[1]) % ((p_15 + (unsigned long)result) + 499UL)));
    v_23 = - (((long long)v_17 * v_19) % (long long)((int)p_9 + 200));
  }
  while_0_break: ;
  if (((unsigned long)(- v) / (p_15 + 505UL)) % (unsigned long)(45689 * (int)(~ v_17) + 90) >= (unsigned long)(! (
      (int)p_7[0] * (int)((signed char)9070654464.f)))) {
    v = (int)(- p_7[2]) / ((((int)p_9 + (int)p_4) >> ((int)(! p_7[1]) & 31)) + 264);
    result = (unsigned short)(! ((int)result / ((int)p_4 + 325) + (v ^ (int)p_7[1])));
    result = (unsigned short)((double)((int)result << ((int)p[3][1] & 15)) / -206749404.387);
  }
  else {
    v_13 = (unsigned long long)(~ (- (~ (char)-33)));
    v_11 = (short)(! (((unsigned long long)p[3][2] / (v_13 + 590ULL)) % 18446744073709549460ULL));
    result = (unsigned short)v_11;
  }
  return result;
}


