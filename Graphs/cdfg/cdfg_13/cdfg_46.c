#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 200419783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, signed char p_5, char p_7[4][4],
                  unsigned long long p_9, short p_11[5])
{
  signed char v_25;
  unsigned short v_23;
  long long v_21;
  char v_19;
  short v_17;
  unsigned char v_15;
  char v_13;
  unsigned int v;
  unsigned char result;
  v_25 = (signed char)-107;
  v_19 = (char)p_11[3];
  v_17 = p_11[3];
  v_15 = (unsigned char)p_5;
  v_13 = (char)20;
  v = (unsigned int)p_9;
  while ((int)(- p_11[1]) > (int)v_17) {
    v_23 = (int)v_19 * 27010;
    v_21 = (long long)(((int)v_23 / ((int)v_25 + 142) + (int)p_11[4]) + (int)p_11[0]);
    v_19 = (char)(v_21 % (long long)(51514 * (24533 * (int)p_7[3][0]) + 786));
    v_17 = (short)19583;
  }
  while_0_break: ;
  if ((- (13659ULL | p_9) | (unsigned long long)p_11[3]) <= (unsigned long long)(
      (int)(! v_13) * ~ ((int)v_15 - 125))) {
    v = (unsigned int)((long)(((int)p_5 % ((int)p_7[3][0] + 892)) / 126) % 908952528L);
    result = (unsigned char)(- ((unsigned long long)(! v) * ((unsigned long long)p / 18446744073379305453ULL)));
  }
  else result = (unsigned char)92;
  return result;
}


