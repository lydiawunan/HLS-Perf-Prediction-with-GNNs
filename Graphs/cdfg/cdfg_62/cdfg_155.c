#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656009167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[4], unsigned int p_9, double p_13, signed char p_15,
         unsigned long long p_19)
{
  unsigned long v_27;
  long long v_25;
  unsigned long v_23;
  long long v_21;
  unsigned long v_17;
  long v_11;
  short v_7;
  float v_4;
  float v;
  long result;
  v_27 = (unsigned long)p_19;
  v_25 = (long long)p[1];
  v_21 = (long long)p_15;
  v_17 = (unsigned long)p_13;
  v_4 = (float)p_9;
  if ((unsigned long)(- (- ((unsigned int)p_15 - p_9))) != ~ (! (65429UL + v_27))) {
    v_11 = (long)(((18446744073709528188ULL / (p_19 + 121ULL)) / 23337ULL) / (unsigned long long)(
                  -26084LL / ((long long)p_15 % (v_21 + 575LL) + 226LL) + 233LL));
    v_7 = (short)p[0];
    v_17 = 4294967208UL;
  }
  else {
    v_23 = (unsigned long)p[2];
    v_7 = (short)(-98L);
    v_11 = (long)(((unsigned long long)(! v_23) + 22353ULL) - (unsigned long long)(
                  ((long long)v_17 + v_25) / (long long)(((int)v_7 - p[2]) + 41)));
  }
  if ((unsigned long)p_15 >= ((- v_17 << (p_9 & 31U)) & 3345179717UL)) {
    v = (float)(~ (char)-73);
    result = (long)v;
  }
  else {
    v_4 = (float)(((16632UL * (unsigned long)p_9) / ((unsigned long)v_4 + 216UL)) * (unsigned long)(
                  (v_11 % -38L) % ((v_11 - (long)p_13) + 943L)));
    v = (float)((long long)p[1] % 8041371LL + (long long)(! v_7));
    result = (long)((644071329ULL - (unsigned long long)v_4) % (unsigned long long)(
                    (- p[0] - (int)((float)p[0] + v)) + 979));
  }
  return result;
}


