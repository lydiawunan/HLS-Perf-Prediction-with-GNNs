//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1030074523
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned int p_5, float p_7, signed char p_9)
{
  int v_21;
  unsigned long long v_19;
  char v_17;
  double v_15;
  unsigned char v_13;
  unsigned short v_11;
  short v;
  double result;
  v_21 = (int)p_9;
  v_19 = (unsigned long long)p;
  v_17 = (char)p_5;
  v_15 = (double)p_7;
  v_13 = (unsigned char)p_9;
  v_11 = (unsigned short)58517;
  result = (double)(45 / ((int)(~ (! p_9)) + 230));
  v = (short)((unsigned long long)((70 >> ((int)(~ v_13) & 31)) & (int)(
                                   ((double)v_13 / (v_15 + 96.)) / ((
                                                                    102. - result) + 467.))) * (
              (unsigned long long)(! (! v_17)) % ((42ULL % (v_19 + 681ULL)) / (unsigned long long)(
                                                  v_21 + 833) + 884ULL)));
  v = (short)((int)v - - ((int)v ^ (int)p_9) % (- ((int)v_11 % -15878) + 678));
  result = (double)((7796ULL ^ (unsigned long long)v) * (unsigned long long)(
                    (-1149939456.f / ((61011.f + p) + 908.f)) / ((float)(
                                                                 (unsigned int)(
                                                                 (float)p_5 + p_7) - ~ p_5) + 956.f)));
  return result;
}


