#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT tanh_58_840_48442500;

SignalI z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makez__value_48504960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)tanh_58_840_48442500;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI a_48593600_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makea_48593600() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_48593600_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)tanh_58_840_48442500;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __47411740;

void code__47411740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
            first = value2integer(make__47775620());
            last = value2integer(make__47775580());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47411740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47411740 = block;
   block->owner = (Object)__47411480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47411740;

   return block;
};

Block __47411440;

void code__47411440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),({
      Value ref,dst = get_value();
      unsigned long long first,last;
      unsigned int pool_state = get_value_pos();
      ref = z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
      first = value2integer(make__47775260());
      last = value2integer(make__47775240());
      dst = write_range(ref,first,last,get_type_signed(),dst);
      set_value_pos(pool_state);
   dst; }));
      set_value_pos(pool_state);
   }
}

Block make__47411440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47411440 = block;
   block->owner = (Object)__47411180;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47411440;

   return block;
};

Block __47411140;

void code__47411140() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__47774520();
            src1 = make__47774500();
            src2 = make__47774480();
            src3 = make__47774460();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47411140() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47411140 = block;
   block->owner = (Object)__47410740;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47411140;

   return block;
};

Block __47411900;

void code__47411900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,addr_47768100_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->c_value,z__value_47407900_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,base_47837920_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,next__data_48213740_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,integer__part_48280640_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,a_48593600_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47411900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47411900 = block;
   block->owner = (Object)__47755580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47411900;

   return block;
};

Block __47411840;

void code__47411840() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->c_value,next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
      set_value_pos(pool_state);
   }
}

Block make__47411840() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47411840 = block;
   block->owner = (Object)__47755320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47411840;

   return block;
};

Value make__47775620() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47775580() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47775260() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47775240() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47774520() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47774500() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47774480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__47774460() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __48315260;

SignalI base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makebase_48361120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48315260;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makenext__data_48407480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48315260;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makeaddr_48407400() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48315260;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540;

SignalI makeinteger__part_48478300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540 = signalI;
   signalI->owner = (Object)__48315260;
   signalI->name = "integer_part";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI my__lut_48226720;

SystemI makemy__lut_48226720() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_48226720 = systemI;
   systemI->owner = (Object)__48315260;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_840_47770120;

   return systemI;
};

SystemI my__interpolator_48347740;

SystemI makemy__interpolator_48347740() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_48347740 = systemI;
   systemI->owner = (Object)__48315260;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_840_46598340;

   return systemI;
};

Behavior __47411480;

Behavior make__47411480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47411480 = behavior;
   behavior->owner = (Object)__48315260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540);
   z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->any,z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->any[z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47411740();

   return behavior;
}

Behavior __47411180;

Behavior make__47411180() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47411180 = behavior;
   behavior->owner = (Object)__48315260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47411440();

   return behavior;
}

Behavior __47410740;

Behavior make__47410740() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47410740 = behavior;
   behavior->owner = (Object)__48315260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47411140();

   return behavior;
}

Behavior __47755580;

Behavior make__47755580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47755580 = behavior;
   behavior->owner = (Object)__48315260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[addr_48407400___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540);
   z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->any,z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->any[z__value_48504960_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[base_48361120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[next__data_48407480___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[integer__part_48478300___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[interpolated__value_48347880_my__interpolator_58_840_46598340___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47411900();

   return behavior;
}

Behavior __47755320;

Behavior make__47755320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47755320 = behavior;
   behavior->owner = (Object)__48315260;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[base_47906380_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540);
   next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any += 1;
   next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any = realloc(next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any,next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any*sizeof(Object));
next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->any[next__data_48226880_my__lut_58_840_47770120___48315260_tanh_58_840_48442500___48198920______58_840_46688540->num_any-1] = (Object)behavior;
   behavior->block = make__47411840();

   return behavior;
}

Scope make__48315260() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __48315260 = scope;
   scope->owner = (Object)tanh_58_840_48442500;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_48226720();
   scope->systemIs[1] = makemy__interpolator_48347740();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_48361120();
   scope->inners[1] = makenext__data_48407480();
   scope->inners[2] = makeaddr_48407400();
   scope->inners[3] = makeinteger__part_48478300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47411480();
   scope->behaviors[1] = make__47411180();
   scope->behaviors[2] = make__47410740();
   scope->behaviors[3] = make__47755580();
   scope->behaviors[4] = make__47755320();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT maketanh_58_840_48442500() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   tanh_58_840_48442500 = systemT;
systemT->owner = NULL;
   systemT->name = "tanh:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_48504960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_48593600();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__48315260();

   return systemT;
}