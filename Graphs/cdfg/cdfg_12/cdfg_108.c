#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226775345
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p[2], unsigned long p_5, short p_7[1][4][2],
          long long p_11, signed char p_13)
{
  unsigned short v_31;
  char v_29;
  long v_27;
  int v_25;
  long v_23;
  int v_21;
  long v_19;
  long long v_17;
  double v_15;
  unsigned short v_9;
  signed char v;
  short result;
  v_31 = (unsigned short)p_7[0][1][0];
  v_27 = (long)p_5;
  v_25 = 423008679;
  v_23 = 174474783L;
  v_21 = (int)p_13;
  v_19 = (long)p_11;
  if (- (~ (v_27 & -157L)) >= v_19) {
    v_17 = (long long)((unsigned long)((long)((int)p_7[0][0][0] / 8375) | 
                                       v_23 / (long)(v_25 + 145)) * 227578409UL);
    v_17 = (long long)(! (v_21 + (int)p_13)) % ((v_17 - 107667031LL) * v_17 + 536LL);
    v_15 = (double)(! (v_17 - (long long)v_19) * ((long long)v_21 * p_11 & -99LL));
  }
  else {
    v_27 = (long)(4294917866LL - ~ ((long long)v_31 % (p_11 + 565LL)));
    v_29 = (char)(! (! (short)-24508));
    v_15 = (double)((unsigned long)(~ (v_27 / (long)((int)v_29 + 165))) - - (
                    p_5 - (unsigned long)p[0]));
  }
  if ((double)p_13 > v_15) result = (short)p[0];
  else {
    v_9 = (unsigned short)(! ((p_11 % (long long)((int)p_13 + 864)) * 57LL));
    v = (signed char)v_9;
    result = (short)((unsigned long)v % (p_5 / (unsigned long)((int)(~ p_7[0][3][0]) + 213) + 803UL));
  }
  return result;
}


