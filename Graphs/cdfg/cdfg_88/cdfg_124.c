#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225564958
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p[2][3], short p_11, short p_17, short p_19[2][3],
         float p_21)
{
  int v_15;
  long long v_13;
  double v_9;
  long v_7;
  long long v_5;
  signed char v;
  long result;
  v_15 = 23014;
  v_13 = 755258787LL;
  v_9 = -58.9310925666;
  v_7 = -41577L;
  v_5 = -37672989LL;
  v = (signed char)-77;
  result = (long)p_17;
  if (- (1.84467440737e+19 / (v_9 + 846.)) != (double)((int)((short)v_9) + (int)(- (! p_19[1][2])))) {
    v_7 = 162L;
    v_5 = (long long)(((int)p[0][2] & (int)v) % (! (~ v_15) + 506));
    v_9 = (double)(((int)v * (int)v) * -8 - (int)(! p[0][1]));
  }
  else {
    result = (long)(3760568545UL * ((unsigned long)v_7 / 4294951970UL) >> (
                    (int)p_17 & 31));
    v_9 = (double)p_19[1][1];
    v = (signed char)p_17;
  }
  while ((long)p[0][2] >= (long)(~ v) / -5373L) {
    v_9 += (double)v_7 / 1178.82550319;
    result = (long)(((long long)((unsigned long)v - 172725341UL) + (v_5 + -47543LL)) * (long long)(! (- result)));
    v_7 = (long)(-36LL / (v_13 + 814LL));
    v = (signed char)p_11;
  }
  while_0_break: ;
  return result;
}


