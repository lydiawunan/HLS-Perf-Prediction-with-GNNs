#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 296085610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p)
{
  signed char v_9;
  int v_7;
  int v_5;
  signed char v;
  char result;
  v_9 = (signed char)p;
  v_5 = (int)p;
  v = (signed char)67;
  v = (signed char)(- ((unsigned long long)((811632753UL * (unsigned long)v) * (
                                            p - 3399106906UL)) / 18446744073709538184ULL));
  v_7 = v_5;
  result = (char)(~ ((unsigned long)(! v_7 * -143) - ((unsigned long)v_9 % (
                                                      p + 378UL) >> 28L)));
  result = (char)(- ((p - 359410460UL) % 4210105918UL) / (unsigned long)(
                  (! (-24778 + (int)result) - (((int)v & v_5) + 63228)) + 934));
  return result;
}


