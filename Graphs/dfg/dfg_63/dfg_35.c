#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 953449580
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p)
{
  unsigned long v_11;
  long v_9;
  int v_6;
  signed char v_4;
  signed char v;
  signed char result;
  v_11 = 4294960939UL;
  v_9 = (long)p;
  v_6 = p;
  v_4 = (signed char)(- ((v_11 * (unsigned long)p) * (unsigned long)(
                         p & 10887)) + (unsigned long)p);
  v = (signed char)(-4161L / (((long)((int)((unsigned char)7.05111347095e+37) & 214) & - (~ v_9)) + 587L));
  v = (signed char)(- (((int)v_4 & v_6) % (((int)(! v) ^ p % -100) + 913)));
  result = v;
  return result;
}


