//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 424015077
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p[4][4], unsigned long p_11, unsigned char p_13,
           char p_15[4][1][1])
{
  unsigned long v_9;
  unsigned char v_6;
  char v_4;
  int v;
  double result;
  v_9 = (unsigned long)p[1][0];
  v = -64986;
  result = (double)(- (! ((unsigned long long)p_15[3][0][0] - 18446744073709521673ULL)));
  v_4 = (char)0;
  v_6 = (unsigned char)(((unsigned long long)p[3][2] * ((unsigned long long)(
                                                        p[2][3] * (long long)v_9) % (
                                                        ((unsigned long long)p_11 - 815536538ULL) + 658ULL))) / (unsigned long long)(
                        (int)p_13 + 790));
  result = (double)(((4294909797U - (unsigned int)(-31877 << (v & 15))) ^ (unsigned int)(
                     ((int)v_4 + (int)v_6) - (int)result)) * (unsigned int)(
                    (int)(! v_4) + 142));
  return result;
}


