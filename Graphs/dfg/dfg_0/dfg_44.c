//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 217897234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, double p_11[2], char p_15)
{
  float v_13;
  long v_9;
  char v_7;
  short v_4;
  unsigned int v;
  int result;
  v_13 = (float)p_15;
  v_9 = (long)p;
  v_7 = (char)p;
  result = (int)p_11[0];
  v_4 = (short)((unsigned int)result / (- (1933U * (unsigned int)p) + 450U) + (
                (unsigned int)((float)((int)((unsigned short)p_11[1]) / 23251) * (
                               v_13 + (float)result)) - (((unsigned int)p_15 - 4294956731U) - 14U)));
  result = (int)(- v_9);
  v = (unsigned int)v_7;
  result = (int)(! (((v * (unsigned int)result) * (unsigned int)(- v_4)) % (unsigned int)(
                    - (~ p) + 899)));
  return result;
}


