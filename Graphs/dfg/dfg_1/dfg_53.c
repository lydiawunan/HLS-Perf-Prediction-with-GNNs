//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 429494255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long p_7, long long p_9)
{
  signed char v_13;
  int v_11;
  unsigned short v_5;
  double v;
  short result;
  v_13 = (signed char)p_7;
  result = (short)-395;
  v_11 = - (-2 / ((int)(! v_13) + 417));
  v_5 = (unsigned short)(- v_11 >> 20LL);
  v = (double)(- (((long long)((int)p ^ (int)v_5) + 722515256LL) % ((long long)(
                                                                    p_7 - (unsigned long)result) * (
                                                                    p_9 ^ (long long)p) + 452LL)));
  result = (short)((int)((unsigned char)v) ^ 227);
  return result;
}


