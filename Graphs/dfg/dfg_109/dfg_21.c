#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524516700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, signed char p_7, long p_9[3], long long p_11,
                float p_13[3])
{
  int v_5;
  long v;
  signed char result;
  v_5 = 26090;
  result = (signed char)-88;
  v = (long)(- ((29721ULL * (unsigned long long)p_9[2] + (unsigned long long)(
                 -79 / ((int)((signed char)817.43242236) + 115))) % (unsigned long long)(
                (long long)result % ((p_11 - (long long)p_13[1]) + 76LL) + 75LL)));
  v = (long)(~ (~ v_5)) + (long)(- ((int)p - (int)p_7)) * v;
  result = (signed char)((((long)(~ p) * v) / 40911L) % ((12016L - (v * (long)p ^ -113L)) + 974L));
  result = result;
  return result;
}


