import { bind } from 'svelte/internal';

const amountToBorrow = bind(null);
const interestRate = bind(null);
const loanTerm = bind(null);
const downPayment = bind(null);
const tradeInValue = bind(null);
const monthlyPayment = bind(null);

const calculateMonthlyPayment = () => {
  const principal = amountToBorrow - downPayment - tradeInValue;
  const interest = interestRate / 100 / 12;
  const numberOfPayments = loanTerm * 12;

  monthlyPayment.set((principal * interest * (1 + interest) ** numberOfPayments) / ((1 + interest) ** numberOfPayments - 1));
};

const app = () => {
  return (
    <div class="container">
      <h1>Auto Loan Calculator</h1>

      <div class="calculator">
        <input type="number" id="amount-to-borrow" bind:value={amountToBorrow} placeholder="Amount to borrow">
        <input type="number" id="interest-rate" bind:value={interestRate} placeholder="Interest rate">
        <input type="number" id="loan-term" bind:value={loanTerm} placeholder="Loan term (in months)">
        <input type="number" id="down-payment" bind:value={downPayment} placeholder="Down payment">
        <input type="number" id="trade-in-value" bind:value={tradeInValue} placeholder="Trade-in value">

        <button type="button" id="calculate-button" on:click={calculateMonthlyPayment}>Calculate</button>

        <p id="monthly-payment">Monthly payment: {monthlyPayment.value}</p>
      </div>
    </div>
  );
};

export default app;
