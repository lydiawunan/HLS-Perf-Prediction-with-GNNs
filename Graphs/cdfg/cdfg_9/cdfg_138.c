#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 242938419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long p_4, unsigned long long p_7[5],
         unsigned long p_11, unsigned long p_19)
{
  float v_25;
  short v_23;
  unsigned long v_21;
  char v_17;
  short v_15;
  long long v_13;
  long long v_9;
  long long v;
  char result;
  v_25 = 548.727539062f;
  v_23 = (short)10867;
  v_21 = 4294911404UL;
  v_17 = (char)p_11;
  v_15 = (short)2038;
  v_13 = (long long)p_11;
  v_9 = (long long)p_7[0];
  result = (char)-57;
  while ((long long)(! ((int)v_15 - (int)v_23) * 60) > 27245LL + ((long long)(
                                                                  (int)p / 28233) - (
                                                                  v_9 - v_13))) {
    v_17 = (char)((unsigned long)((int)((char)p) * (int)result) / (((unsigned long)result + p_4) + 204UL) + 4294967172UL);
    v_23 = (short)((unsigned long)v_25 / (v_21 + 913UL));
    v_13 = (long long)(- ((double)v_17 / -5596173990.97));
  }
  while_0_break: ;
  if ((p_11 % (v_21 + 492UL)) * (unsigned long)(-67.1454963495 + (double)result) - (unsigned long)(
      16294.f / (67.1399688721f * (float)v_9 + 309.f)) <= p_4 % (! (p_19 % (
                                                                    p_4 + 1010UL)) + 894UL)) {
    v = ((v_9 % (long long)(p_11 + 54UL)) / ((v_13 - (long long)v_15) + 418LL)) % (
        88LL * (v_9 / (long long)((int)v_17 + 964)) + 267LL);
    result = (char)((unsigned long long)(~ p_4) + (unsigned long long)(
                                                  2.39052317469e+38 * (double)v) % (
                                                  (p_7[2] + 3818180297ULL) + 886ULL));
    result = (char)((unsigned int)p - (0U - (unsigned int)(! result)));
  }
  else result = (char)p_19;
  return result;
}


