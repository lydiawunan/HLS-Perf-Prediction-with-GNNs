//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 256710193
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, unsigned long long p_7, float p_11)
{
  long v_13;
  char v_9;
  unsigned long long v_5;
  int v;
  unsigned long long result;
  v_13 = -4370L;
  v_9 = (char)p;
  v_5 = (unsigned long long)(1L | v_13);
  v = (int)(9527247897.09 + (double)((unsigned long)((float)p_7 - ((float)v_9 - p_11)) % 3403571830UL));
  result = ! (- v_5);
  result = ((53098ULL * (unsigned long long)p) % (! result + 996ULL) + (
            ((unsigned long long)v - 18446744073253430341ULL) + (unsigned long long)(- v))) / (
           (unsigned long long)p + 930ULL);
  return result;
}


