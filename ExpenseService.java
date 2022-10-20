package com.harshil.expensetracker.service;

import com.harshil.expensetracker.entity.Expense;
import com.harshil.expensetracker.exception.NoResourceFoundException;
import org.springframework.data.domain.Page;

import org.springframework.data.domain.Pageable;
import java.util.List;

public interface ExpenseService {

    public List<Expense> getAllExpenses(Pageable pageable);
    public Expense getExpenseById(Long id) throws NoResourceFoundException;
    public void deleteExpense(Long id);

    public Expense saveExpense(Expense expense);

    public Expense updateExpense(Long id, Expense expense);

}
