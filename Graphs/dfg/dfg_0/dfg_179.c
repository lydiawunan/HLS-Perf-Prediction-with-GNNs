//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 746666388
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[4], double p_11, double p_13, double p_17[1][3][4])
{
  long v_15;
  unsigned int v_9;
  char v_6;
  unsigned char v_4;
  short v;
  float result;
  v_15 = (long)p_17[0][0][1];
  v_6 = (char)p_13;
  v = (short)-27215;
  v_4 = (unsigned char)(- ((((unsigned long long)p_11 - 18446744073560782228ULL) + (unsigned long long)(
                            75. / (p_13 + 96.))) ^ (unsigned long long)(
                           (v_15 - 20L) % ((long)(p_17[0][0][2] - (double)v_6) + 224L))));
  v_9 = (unsigned int)p_11;
  v_6 = (char)(~ 42104);
  result = (float)((unsigned long)(((long)(~ v) | 547222125L) + (long)(
                                   ((int)v_4 + 25526) * (int)(! v_6))) - 
                   p[2] * (unsigned long)v_9);
  return result;
}


