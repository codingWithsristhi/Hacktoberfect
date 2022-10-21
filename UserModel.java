package com.harshil.expensetracker.entity;

import lombok.AllArgsConstructor;
import lombok.Data;

import javax.validation.constraints.*;

@Data
@AllArgsConstructor
public class UserModel {

    @NotBlank(message = "Name Can Not Be Null")
    private String name;

    @Email
    private String email;

    @NotBlank(message = "Please enter a valid password")
    @Size(min = 8, message = "Password length is less than 8")
    private String password;

    @NotNull
    private Long age;
}
