//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113253432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, long long p_9)
{
  long long v_11;
  char v_6;
  char v_4;
  short v;
  unsigned int result;
  v_11 = 579752752LL;
  v_4 = (char)p;
  result = (unsigned int)p_9;
  v_6 = (char)(- (138101707LL - (long long)v_4 * v_11) + (long long)v_4);
  v_4 = (char)((long long)(! (! ((int)((char)-716.210571289f) * (int)v_6))) + 
               (long long)(- (- p)) * (~ p_9 - (long long)result));
  v = (short)704.869430984;
  result = (unsigned int)(~ 0);
  return result;
}


