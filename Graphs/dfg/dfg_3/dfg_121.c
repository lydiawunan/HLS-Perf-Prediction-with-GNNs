//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 528055495
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, float p_4, signed char p_11,
          unsigned long p_13[5][4][1], unsigned char p_15[3][5])
{
  long v_9;
  float v_7;
  unsigned char v;
  short result;
  v_9 = (long)p_15[2][3];
  v_7 = -448.607574463f;
  v_9 = (long)((unsigned long)(~ (-309019348L ^ (long)(~ p_11))) * ((
                                                                    (unsigned long)(
                                                                    (int)p % 113) + p_13[4][0][0]) & (unsigned long)(
                                                                    (long)p_15[0][1] % (
                                                                    (
                                                                    v_9 & (long)p_11) + 333L))));
  v = (unsigned char)(-493.589209878 / (double)(- (v_7 / ((float)v_9 + 577.f)) + 267.f) - 464.046844482);
  result = (short)((int)p / ((((int)((char)p_4) + -78) * (int)(~ v) - -15959) + 157));
  result = (short)((int)(~ result) & (int)p);
  return result;
}


